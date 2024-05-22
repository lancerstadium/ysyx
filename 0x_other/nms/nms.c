
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>


// two-version: u8 and f16

typedef uint8_t u8;
typedef float f16;

// macros
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))


/// @brief Bounding box - u8
typedef struct {
    u8 x_min;
    u8 y_min;
    u8 x_max;
    u8 y_max;
} BBox_u8_t;

/// @brief Bounding box - f16
typedef struct {
    f16 x_min;
    f16 y_min;
    f16 x_max;
    f16 y_max;
} BBox_f16_t;


/// @brief Object result - u8
typedef struct {
    u8 confi;
    BBox_u8_t bbox;
} Obj_u8_t;

/// @brief Object result - f16
typedef struct {
    f16 confi;
    BBox_f16_t bbox;
} Obj_f16_t;


void obj_u8_print(Obj_u8_t obj) {
    printf("score = %u, bbox = (%u %u %u %u)\n", 
    obj.confi,
    obj.bbox.x_min, obj.bbox.y_min, obj.bbox.x_max, obj.bbox.y_max);
}


void obj_f16_print(Obj_f16_t obj) {
    printf("score = %f, bbox = (%f %f %f %f)\n", 
    obj.confi,
    obj.bbox.x_min, obj.bbox.y_min, obj.bbox.x_max, obj.bbox.y_max);
}


/// @brief compare: `>` high -> low, `<` low -> high
int compare_f16(const Obj_f16_t a, const Obj_f16_t b) {
    return a.confi < b.confi ? 1 : -1;
}

/// @brief compare: `>` high -> low, `<` low -> high
int compare_u8(const Obj_u8_t a, const Obj_u8_t b) {
    return a.confi < b.confi ? 1 : -1;
}

/// @brief Compute Intersection over union
/// @param a 
/// @param b 
/// @return iou
f16 iou_f16(const Obj_f16_t a, const Obj_f16_t b) {
    // compute min and max
    f16 x1 = MAX(a.bbox.x_min, b.bbox.x_min);
    f16 y1 = MAX(a.bbox.y_min, b.bbox.y_min);
    f16 x2 = MIN(a.bbox.x_max, b.bbox.x_max);
    f16 y2 = MIN(a.bbox.y_max, b.bbox.y_max);

    // have no coverage
    if(x2 < x1 || y2 < y1) {
        return 0;
    }

    // compute iou
    f16 i = (x2 - x1) * (y2 - y1);
    f16 u = (a.bbox.x_max - a.bbox.x_min) * (a.bbox.y_max - a.bbox.y_min) + (b.bbox.x_max - b.bbox.x_min) * (b.bbox.y_max - b.bbox.y_min) - i;
    f16 iou = i / u;

    return iou;
}


u8 iou_u8(const Obj_u8_t a, const Obj_u8_t b) {
    // compute min and max
    u8 x1 = MAX(a.bbox.x_min, b.bbox.x_min);
    u8 y1 = MAX(a.bbox.y_min, b.bbox.y_min);
    u8 x2 = MIN(a.bbox.x_max, b.bbox.x_max);
    u8 y2 = MIN(a.bbox.y_max, b.bbox.y_max);

    // have no coverage
    if(x2 < x1 || y2 < y1) {
        return 0;
    }

    // compute iou
    u8 i = (x2 - x1) * (y2 - y1);
    u8 u = (a.bbox.x_max - a.bbox.x_min) * (a.bbox.y_max - a.bbox.y_min) + (b.bbox.x_max - b.bbox.x_min) * (b.bbox.y_max - b.bbox.y_min) - i;
    u8 iou = i / u;

    return iou;
}


/// @brief Non-maximum suppression
/// @param obj 
/// @param res 
/// @param total 
/// @param nms_thresh 
void nms_f16(Obj_f16_t obj[], Obj_f16_t res[], int *total, float nms_thresh) {
    // sort by score: high -> low
    qsort(obj, *total, sizeof(Obj_f16_t), compare_f16);

    for(int i = 0; i < *total; i++) {
        int idx = 1;
        res[i] = obj[i];
        // put dealing-obj behind dealed-obj
        for(int j = i + 1; j < *total; j++) {
            if(iou_f16(obj[i], obj[j]) < nms_thresh) {
                obj[idx] = obj[j];
                idx++;
            }
        }
        *total = idx;

        // no new dealing-obj: break
        if(idx == 1) {
            *total = i + 1;
        }
    }
}


void nms_u8(Obj_u8_t obj[], Obj_u8_t res[], int *total, float nms_thresh) {
    // sort by score: high -> low
    qsort(obj, *total, sizeof(Obj_u8_t), compare_u8);

    for(int i = 0; i < *total; i++) {
        int idx = 1;
        res[i] = obj[i];
        // put dealing-obj behind dealed-obj
        for(int j = i + 1; j < *total; j++) {
            if(iou_u8(obj[i], obj[j]) < nms_thresh) {
                obj[idx] = obj[j];
                idx++;
            }
        }
        *total = idx;

        // no new dealing-obj: break
        if(idx == 1) {
            *total = i + 1;
        }
    }
}


void nms_test_f16() {
    int total = 10;                 // total number of object
    float nms_thresh = 0.5;         // nms threshold
    // dealing object: before nms
    Obj_f16_t obj[100] = {
        { 0.8, {10.0, 20.0, 50.0, 60.0}},
        { 0.7, {15.0, 25.0, 55.0, 65.0}},
        { 0.6, {12.0, 22.0, 52.0, 62.0}},
        { 0.9, {18.0, 28.0, 58.0, 68.0}},
        { 0.5, { 8.0, 18.0, 48.0, 58.0}},
        {0.75, {11.0, 21.0, 51.0, 61.0}},
        {0.85, {14.0, 24.0, 54.0, 64.0}},
        {0.65, {13.0, 23.0, 53.0, 63.0}},
        {0.55, {16.0, 26.0, 56.0, 66.0}},
        {0.72, {17.0, 27.0, 57.0, 67.0}},
        {0.82, {19.0, 29.0, 59.0, 69.0}},
        {0.78, {21.0, 31.0, 61.0, 71.0}},
        // Add more data as needed
    };
    Obj_f16_t res[10]  = {};        // result object: after nms

    
    nms_f16(obj, res, &total, nms_thresh);

    printf("[nms-f16] nms thresh: %f, total: %d\n", nms_thresh, total);
    for(int i = 0; i < total; i++) {
        obj_f16_print(res[i]);
    }
}


void nms_test_u8() {
    int total = 10;                 // total number of object
    float nms_thresh = 0.5;         // nms threshold
    // dealing object: before nms
    Obj_u8_t obj[100] = {
        { 8, {10, 20, 50, 60}},
        { 7, {15, 25, 55, 65}},
        { 6, {12, 22, 52, 62}},
        { 9, {18, 28, 58, 68}},
        { 5, { 8, 18, 48, 58}},
        {75, {11, 21, 51, 61}},
        {85, {14, 24, 54, 64}},
        {65, {13, 23, 53, 63}},
        {55, {16, 26, 56, 66}},
        {72, {17, 27, 57, 67}},
        {82, {19, 29, 59, 69}},
        {78, {21, 31, 61, 71}},
        // Add more data as needed
    };
    Obj_u8_t res[10]  = {};        // result object: after nms

    nms_u8(obj, res, &total, nms_thresh);

    printf("[nms-u8] nms thresh: %f, total: %d\n", nms_thresh, total);
    for(int i = 0; i < total; i++) {
        obj_u8_print(res[i]);
    }
}



int main(int argc, char* argv[]) {

    nms_test_f16();
    nms_test_u8();

    return 0;
}