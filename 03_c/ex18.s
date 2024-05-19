
ex18:     file format elf64-x86-64


Disassembly of section .init:

0000000000001000 <_init>:
    1000:	f3 0f 1e fa          	endbr64 
    1004:	48 83 ec 08          	sub    $0x8,%rsp
    1008:	48 8b 05 d9 2f 00 00 	mov    0x2fd9(%rip),%rax        # 3fe8 <__gmon_start__@Base>
    100f:	48 85 c0             	test   %rax,%rax
    1012:	74 02                	je     1016 <_init+0x16>
    1014:	ff d0                	call   *%rax
    1016:	48 83 c4 08          	add    $0x8,%rsp
    101a:	c3                   	ret    

Disassembly of section .plt:

0000000000001020 <.plt>:
    1020:	ff 35 5a 2f 00 00    	push   0x2f5a(%rip)        # 3f80 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	f2 ff 25 5b 2f 00 00 	bnd jmp *0x2f5b(%rip)        # 3f88 <_GLOBAL_OFFSET_TABLE_+0x10>
    102d:	0f 1f 00             	nopl   (%rax)
    1030:	f3 0f 1e fa          	endbr64 
    1034:	68 00 00 00 00       	push   $0x0
    1039:	f2 e9 e1 ff ff ff    	bnd jmp 1020 <_init+0x20>
    103f:	90                   	nop
    1040:	f3 0f 1e fa          	endbr64 
    1044:	68 01 00 00 00       	push   $0x1
    1049:	f2 e9 d1 ff ff ff    	bnd jmp 1020 <_init+0x20>
    104f:	90                   	nop
    1050:	f3 0f 1e fa          	endbr64 
    1054:	68 02 00 00 00       	push   $0x2
    1059:	f2 e9 c1 ff ff ff    	bnd jmp 1020 <_init+0x20>
    105f:	90                   	nop
    1060:	f3 0f 1e fa          	endbr64 
    1064:	68 03 00 00 00       	push   $0x3
    1069:	f2 e9 b1 ff ff ff    	bnd jmp 1020 <_init+0x20>
    106f:	90                   	nop
    1070:	f3 0f 1e fa          	endbr64 
    1074:	68 04 00 00 00       	push   $0x4
    1079:	f2 e9 a1 ff ff ff    	bnd jmp 1020 <_init+0x20>
    107f:	90                   	nop
    1080:	f3 0f 1e fa          	endbr64 
    1084:	68 05 00 00 00       	push   $0x5
    1089:	f2 e9 91 ff ff ff    	bnd jmp 1020 <_init+0x20>
    108f:	90                   	nop
    1090:	f3 0f 1e fa          	endbr64 
    1094:	68 06 00 00 00       	push   $0x6
    1099:	f2 e9 81 ff ff ff    	bnd jmp 1020 <_init+0x20>
    109f:	90                   	nop
    10a0:	f3 0f 1e fa          	endbr64 
    10a4:	68 07 00 00 00       	push   $0x7
    10a9:	f2 e9 71 ff ff ff    	bnd jmp 1020 <_init+0x20>
    10af:	90                   	nop
    10b0:	f3 0f 1e fa          	endbr64 
    10b4:	68 08 00 00 00       	push   $0x8
    10b9:	f2 e9 61 ff ff ff    	bnd jmp 1020 <_init+0x20>
    10bf:	90                   	nop

Disassembly of section .plt.got:

00000000000010c0 <__cxa_finalize@plt>:
    10c0:	f3 0f 1e fa          	endbr64 
    10c4:	f2 ff 25 2d 2f 00 00 	bnd jmp *0x2f2d(%rip)        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    10cb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .plt.sec:

00000000000010d0 <free@plt>:
    10d0:	f3 0f 1e fa          	endbr64 
    10d4:	f2 ff 25 b5 2e 00 00 	bnd jmp *0x2eb5(%rip)        # 3f90 <free@GLIBC_2.2.5>
    10db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010e0 <putchar@plt>:
    10e0:	f3 0f 1e fa          	endbr64 
    10e4:	f2 ff 25 ad 2e 00 00 	bnd jmp *0x2ead(%rip)        # 3f98 <putchar@GLIBC_2.2.5>
    10eb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010f0 <__errno_location@plt>:
    10f0:	f3 0f 1e fa          	endbr64 
    10f4:	f2 ff 25 a5 2e 00 00 	bnd jmp *0x2ea5(%rip)        # 3fa0 <__errno_location@GLIBC_2.2.5>
    10fb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000001100 <printf@plt>:
    1100:	f3 0f 1e fa          	endbr64 
    1104:	f2 ff 25 9d 2e 00 00 	bnd jmp *0x2e9d(%rip)        # 3fa8 <printf@GLIBC_2.2.5>
    110b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000001110 <memcpy@plt>:
    1110:	f3 0f 1e fa          	endbr64 
    1114:	f2 ff 25 95 2e 00 00 	bnd jmp *0x2e95(%rip)        # 3fb0 <memcpy@GLIBC_2.14>
    111b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000001120 <malloc@plt>:
    1120:	f3 0f 1e fa          	endbr64 
    1124:	f2 ff 25 8d 2e 00 00 	bnd jmp *0x2e8d(%rip)        # 3fb8 <malloc@GLIBC_2.2.5>
    112b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000001130 <perror@plt>:
    1130:	f3 0f 1e fa          	endbr64 
    1134:	f2 ff 25 85 2e 00 00 	bnd jmp *0x2e85(%rip)        # 3fc0 <perror@GLIBC_2.2.5>
    113b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000001140 <atoi@plt>:
    1140:	f3 0f 1e fa          	endbr64 
    1144:	f2 ff 25 7d 2e 00 00 	bnd jmp *0x2e7d(%rip)        # 3fc8 <atoi@GLIBC_2.2.5>
    114b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000001150 <exit@plt>:
    1150:	f3 0f 1e fa          	endbr64 
    1154:	f2 ff 25 75 2e 00 00 	bnd jmp *0x2e75(%rip)        # 3fd0 <exit@GLIBC_2.2.5>
    115b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .text:

0000000000001160 <_start>:
    1160:	f3 0f 1e fa          	endbr64 
    1164:	31 ed                	xor    %ebp,%ebp
    1166:	49 89 d1             	mov    %rdx,%r9
    1169:	5e                   	pop    %rsi
    116a:	48 89 e2             	mov    %rsp,%rdx
    116d:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    1171:	50                   	push   %rax
    1172:	54                   	push   %rsp
    1173:	45 31 c0             	xor    %r8d,%r8d
    1176:	31 c9                	xor    %ecx,%ecx
    1178:	48 8d 3d 74 03 00 00 	lea    0x374(%rip),%rdi        # 14f3 <main>
    117f:	ff 15 53 2e 00 00    	call   *0x2e53(%rip)        # 3fd8 <__libc_start_main@GLIBC_2.34>
    1185:	f4                   	hlt    
    1186:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    118d:	00 00 00 

0000000000001190 <deregister_tm_clones>:
    1190:	48 8d 3d 79 2e 00 00 	lea    0x2e79(%rip),%rdi        # 4010 <__TMC_END__>
    1197:	48 8d 05 72 2e 00 00 	lea    0x2e72(%rip),%rax        # 4010 <__TMC_END__>
    119e:	48 39 f8             	cmp    %rdi,%rax
    11a1:	74 15                	je     11b8 <deregister_tm_clones+0x28>
    11a3:	48 8b 05 36 2e 00 00 	mov    0x2e36(%rip),%rax        # 3fe0 <_ITM_deregisterTMCloneTable@Base>
    11aa:	48 85 c0             	test   %rax,%rax
    11ad:	74 09                	je     11b8 <deregister_tm_clones+0x28>
    11af:	ff e0                	jmp    *%rax
    11b1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    11b8:	c3                   	ret    
    11b9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000011c0 <register_tm_clones>:
    11c0:	48 8d 3d 49 2e 00 00 	lea    0x2e49(%rip),%rdi        # 4010 <__TMC_END__>
    11c7:	48 8d 35 42 2e 00 00 	lea    0x2e42(%rip),%rsi        # 4010 <__TMC_END__>
    11ce:	48 29 fe             	sub    %rdi,%rsi
    11d1:	48 89 f0             	mov    %rsi,%rax
    11d4:	48 c1 ee 3f          	shr    $0x3f,%rsi
    11d8:	48 c1 f8 03          	sar    $0x3,%rax
    11dc:	48 01 c6             	add    %rax,%rsi
    11df:	48 d1 fe             	sar    %rsi
    11e2:	74 14                	je     11f8 <register_tm_clones+0x38>
    11e4:	48 8b 05 05 2e 00 00 	mov    0x2e05(%rip),%rax        # 3ff0 <_ITM_registerTMCloneTable@Base>
    11eb:	48 85 c0             	test   %rax,%rax
    11ee:	74 08                	je     11f8 <register_tm_clones+0x38>
    11f0:	ff e0                	jmp    *%rax
    11f2:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    11f8:	c3                   	ret    
    11f9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001200 <__do_global_dtors_aux>:
    1200:	f3 0f 1e fa          	endbr64 
    1204:	80 3d 05 2e 00 00 00 	cmpb   $0x0,0x2e05(%rip)        # 4010 <__TMC_END__>
    120b:	75 2b                	jne    1238 <__do_global_dtors_aux+0x38>
    120d:	55                   	push   %rbp
    120e:	48 83 3d e2 2d 00 00 	cmpq   $0x0,0x2de2(%rip)        # 3ff8 <__cxa_finalize@GLIBC_2.2.5>
    1215:	00 
    1216:	48 89 e5             	mov    %rsp,%rbp
    1219:	74 0c                	je     1227 <__do_global_dtors_aux+0x27>
    121b:	48 8b 3d e6 2d 00 00 	mov    0x2de6(%rip),%rdi        # 4008 <__dso_handle>
    1222:	e8 99 fe ff ff       	call   10c0 <__cxa_finalize@plt>
    1227:	e8 64 ff ff ff       	call   1190 <deregister_tm_clones>
    122c:	c6 05 dd 2d 00 00 01 	movb   $0x1,0x2ddd(%rip)        # 4010 <__TMC_END__>
    1233:	5d                   	pop    %rbp
    1234:	c3                   	ret    
    1235:	0f 1f 00             	nopl   (%rax)
    1238:	c3                   	ret    
    1239:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001240 <frame_dummy>:
    1240:	f3 0f 1e fa          	endbr64 
    1244:	e9 77 ff ff ff       	jmp    11c0 <register_tm_clones>

0000000000001249 <die>:
    1249:	f3 0f 1e fa          	endbr64 
    124d:	55                   	push   %rbp
    124e:	48 89 e5             	mov    %rsp,%rbp
    1251:	48 83 ec 10          	sub    $0x10,%rsp
    1255:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
    1259:	e8 92 fe ff ff       	call   10f0 <__errno_location@plt>
    125e:	8b 00                	mov    (%rax),%eax
    1260:	85 c0                	test   %eax,%eax
    1262:	74 0e                	je     1272 <die+0x29>
    1264:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1268:	48 89 c7             	mov    %rax,%rdi
    126b:	e8 c0 fe ff ff       	call   1130 <perror@plt>
    1270:	eb 1b                	jmp    128d <die+0x44>
    1272:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1276:	48 89 c6             	mov    %rax,%rsi
    1279:	48 8d 05 84 0d 00 00 	lea    0xd84(%rip),%rax        # 2004 <_IO_stdin_used+0x4>
    1280:	48 89 c7             	mov    %rax,%rdi
    1283:	b8 00 00 00 00       	mov    $0x0,%eax
    1288:	e8 73 fe ff ff       	call   1100 <printf@plt>
    128d:	bf 01 00 00 00       	mov    $0x1,%edi
    1292:	e8 b9 fe ff ff       	call   1150 <exit@plt>

0000000000001297 <bubble_sort>:
    1297:	f3 0f 1e fa          	endbr64 
    129b:	55                   	push   %rbp
    129c:	48 89 e5             	mov    %rsp,%rbp
    129f:	48 83 ec 40          	sub    $0x40,%rsp
    12a3:	48 89 7d d8          	mov    %rdi,-0x28(%rbp)
    12a7:	89 75 d4             	mov    %esi,-0x2c(%rbp)
    12aa:	48 89 55 c8          	mov    %rdx,-0x38(%rbp)
    12ae:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%rbp)
    12b5:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    12bc:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%rbp)
    12c3:	8b 45 d4             	mov    -0x2c(%rbp),%eax
    12c6:	48 98                	cltq   
    12c8:	48 c1 e0 02          	shl    $0x2,%rax
    12cc:	48 89 c7             	mov    %rax,%rdi
    12cf:	e8 4c fe ff ff       	call   1120 <malloc@plt>
    12d4:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    12d8:	48 83 7d f8 00       	cmpq   $0x0,-0x8(%rbp)
    12dd:	75 0f                	jne    12ee <bubble_sort+0x57>
    12df:	48 8d 05 29 0d 00 00 	lea    0xd29(%rip),%rax        # 200f <_IO_stdin_used+0xf>
    12e6:	48 89 c7             	mov    %rax,%rdi
    12e9:	e8 5b ff ff ff       	call   1249 <die>
    12ee:	8b 45 d4             	mov    -0x2c(%rbp),%eax
    12f1:	48 98                	cltq   
    12f3:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    12fa:	00 
    12fb:	48 8b 4d d8          	mov    -0x28(%rbp),%rcx
    12ff:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1303:	48 89 ce             	mov    %rcx,%rsi
    1306:	48 89 c7             	mov    %rax,%rdi
    1309:	e8 02 fe ff ff       	call   1110 <memcpy@plt>
    130e:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    1315:	e9 c8 00 00 00       	jmp    13e2 <bubble_sort+0x14b>
    131a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%rbp)
    1321:	e9 a9 00 00 00       	jmp    13cf <bubble_sort+0x138>
    1326:	8b 45 f0             	mov    -0x10(%rbp),%eax
    1329:	48 98                	cltq   
    132b:	48 83 c0 01          	add    $0x1,%rax
    132f:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    1336:	00 
    1337:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    133b:	48 01 d0             	add    %rdx,%rax
    133e:	8b 10                	mov    (%rax),%edx
    1340:	8b 45 f0             	mov    -0x10(%rbp),%eax
    1343:	48 98                	cltq   
    1345:	48 8d 0c 85 00 00 00 	lea    0x0(,%rax,4),%rcx
    134c:	00 
    134d:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1351:	48 01 c8             	add    %rcx,%rax
    1354:	8b 00                	mov    (%rax),%eax
    1356:	48 8b 4d c8          	mov    -0x38(%rbp),%rcx
    135a:	89 d6                	mov    %edx,%esi
    135c:	89 c7                	mov    %eax,%edi
    135e:	ff d1                	call   *%rcx
    1360:	85 c0                	test   %eax,%eax
    1362:	7e 67                	jle    13cb <bubble_sort+0x134>
    1364:	8b 45 f0             	mov    -0x10(%rbp),%eax
    1367:	48 98                	cltq   
    1369:	48 83 c0 01          	add    $0x1,%rax
    136d:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    1374:	00 
    1375:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1379:	48 01 d0             	add    %rdx,%rax
    137c:	8b 00                	mov    (%rax),%eax
    137e:	89 45 f4             	mov    %eax,-0xc(%rbp)
    1381:	8b 45 f0             	mov    -0x10(%rbp),%eax
    1384:	48 98                	cltq   
    1386:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    138d:	00 
    138e:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    1392:	48 01 d0             	add    %rdx,%rax
    1395:	8b 55 f0             	mov    -0x10(%rbp),%edx
    1398:	48 63 d2             	movslq %edx,%rdx
    139b:	48 83 c2 01          	add    $0x1,%rdx
    139f:	48 8d 0c 95 00 00 00 	lea    0x0(,%rdx,4),%rcx
    13a6:	00 
    13a7:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
    13ab:	48 01 ca             	add    %rcx,%rdx
    13ae:	8b 00                	mov    (%rax),%eax
    13b0:	89 02                	mov    %eax,(%rdx)
    13b2:	8b 45 f0             	mov    -0x10(%rbp),%eax
    13b5:	48 98                	cltq   
    13b7:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    13be:	00 
    13bf:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    13c3:	48 01 c2             	add    %rax,%rdx
    13c6:	8b 45 f4             	mov    -0xc(%rbp),%eax
    13c9:	89 02                	mov    %eax,(%rdx)
    13cb:	83 45 f0 01          	addl   $0x1,-0x10(%rbp)
    13cf:	8b 45 d4             	mov    -0x2c(%rbp),%eax
    13d2:	83 e8 01             	sub    $0x1,%eax
    13d5:	39 45 f0             	cmp    %eax,-0x10(%rbp)
    13d8:	0f 8c 48 ff ff ff    	jl     1326 <bubble_sort+0x8f>
    13de:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    13e2:	8b 45 ec             	mov    -0x14(%rbp),%eax
    13e5:	3b 45 d4             	cmp    -0x2c(%rbp),%eax
    13e8:	0f 8c 2c ff ff ff    	jl     131a <bubble_sort+0x83>
    13ee:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    13f2:	c9                   	leave  
    13f3:	c3                   	ret    

00000000000013f4 <sorted_order>:
    13f4:	f3 0f 1e fa          	endbr64 
    13f8:	55                   	push   %rbp
    13f9:	48 89 e5             	mov    %rsp,%rbp
    13fc:	89 7d fc             	mov    %edi,-0x4(%rbp)
    13ff:	89 75 f8             	mov    %esi,-0x8(%rbp)
    1402:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1405:	2b 45 f8             	sub    -0x8(%rbp),%eax
    1408:	5d                   	pop    %rbp
    1409:	c3                   	ret    

000000000000140a <reverse_order>:
    140a:	f3 0f 1e fa          	endbr64 
    140e:	55                   	push   %rbp
    140f:	48 89 e5             	mov    %rsp,%rbp
    1412:	89 7d fc             	mov    %edi,-0x4(%rbp)
    1415:	89 75 f8             	mov    %esi,-0x8(%rbp)
    1418:	8b 45 f8             	mov    -0x8(%rbp),%eax
    141b:	2b 45 fc             	sub    -0x4(%rbp),%eax
    141e:	5d                   	pop    %rbp
    141f:	c3                   	ret    

0000000000001420 <strange_order>:
    1420:	f3 0f 1e fa          	endbr64 
    1424:	55                   	push   %rbp
    1425:	48 89 e5             	mov    %rsp,%rbp
    1428:	89 7d fc             	mov    %edi,-0x4(%rbp)
    142b:	89 75 f8             	mov    %esi,-0x8(%rbp)
    142e:	83 7d fc 00          	cmpl   $0x0,-0x4(%rbp)
    1432:	74 06                	je     143a <strange_order+0x1a>
    1434:	83 7d f8 00          	cmpl   $0x0,-0x8(%rbp)
    1438:	75 07                	jne    1441 <strange_order+0x21>
    143a:	b8 00 00 00 00       	mov    $0x0,%eax
    143f:	eb 09                	jmp    144a <strange_order+0x2a>
    1441:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1444:	99                   	cltd   
    1445:	f7 7d f8             	idivl  -0x8(%rbp)
    1448:	89 d0                	mov    %edx,%eax
    144a:	5d                   	pop    %rbp
    144b:	c3                   	ret    

000000000000144c <test_sorting>:
    144c:	f3 0f 1e fa          	endbr64 
    1450:	55                   	push   %rbp
    1451:	48 89 e5             	mov    %rsp,%rbp
    1454:	48 83 ec 30          	sub    $0x30,%rsp
    1458:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
    145c:	89 75 e4             	mov    %esi,-0x1c(%rbp)
    145f:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
    1463:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%rbp)
    146a:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
    146e:	8b 4d e4             	mov    -0x1c(%rbp),%ecx
    1471:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    1475:	89 ce                	mov    %ecx,%esi
    1477:	48 89 c7             	mov    %rax,%rdi
    147a:	e8 18 fe ff ff       	call   1297 <bubble_sort>
    147f:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    1483:	48 83 7d f8 00       	cmpq   $0x0,-0x8(%rbp)
    1488:	75 0f                	jne    1499 <test_sorting+0x4d>
    148a:	48 8d 05 8c 0b 00 00 	lea    0xb8c(%rip),%rax        # 201d <_IO_stdin_used+0x1d>
    1491:	48 89 c7             	mov    %rax,%rdi
    1494:	e8 b0 fd ff ff       	call   1249 <die>
    1499:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%rbp)
    14a0:	eb 30                	jmp    14d2 <test_sorting+0x86>
    14a2:	8b 45 f4             	mov    -0xc(%rbp),%eax
    14a5:	48 98                	cltq   
    14a7:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    14ae:	00 
    14af:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    14b3:	48 01 d0             	add    %rdx,%rax
    14b6:	8b 00                	mov    (%rax),%eax
    14b8:	89 c6                	mov    %eax,%esi
    14ba:	48 8d 05 79 0b 00 00 	lea    0xb79(%rip),%rax        # 203a <_IO_stdin_used+0x3a>
    14c1:	48 89 c7             	mov    %rax,%rdi
    14c4:	b8 00 00 00 00       	mov    $0x0,%eax
    14c9:	e8 32 fc ff ff       	call   1100 <printf@plt>
    14ce:	83 45 f4 01          	addl   $0x1,-0xc(%rbp)
    14d2:	8b 45 f4             	mov    -0xc(%rbp),%eax
    14d5:	3b 45 e4             	cmp    -0x1c(%rbp),%eax
    14d8:	7c c8                	jl     14a2 <test_sorting+0x56>
    14da:	bf 0a 00 00 00       	mov    $0xa,%edi
    14df:	e8 fc fb ff ff       	call   10e0 <putchar@plt>
    14e4:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
    14e8:	48 89 c7             	mov    %rax,%rdi
    14eb:	e8 e0 fb ff ff       	call   10d0 <free@plt>
    14f0:	90                   	nop
    14f1:	c9                   	leave  
    14f2:	c3                   	ret    

00000000000014f3 <main>:
    14f3:	f3 0f 1e fa          	endbr64 
    14f7:	55                   	push   %rbp
    14f8:	48 89 e5             	mov    %rsp,%rbp
    14fb:	53                   	push   %rbx
    14fc:	48 83 ec 38          	sub    $0x38,%rsp
    1500:	89 7d cc             	mov    %edi,-0x34(%rbp)
    1503:	48 89 75 c0          	mov    %rsi,-0x40(%rbp)
    1507:	83 7d cc 01          	cmpl   $0x1,-0x34(%rbp)
    150b:	7f 0f                	jg     151c <main+0x29>
    150d:	48 8d 05 2a 0b 00 00 	lea    0xb2a(%rip),%rax        # 203e <_IO_stdin_used+0x3e>
    1514:	48 89 c7             	mov    %rax,%rdi
    1517:	e8 2d fd ff ff       	call   1249 <die>
    151c:	8b 45 cc             	mov    -0x34(%rbp),%eax
    151f:	83 e8 01             	sub    $0x1,%eax
    1522:	89 45 dc             	mov    %eax,-0x24(%rbp)
    1525:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%rbp)
    152c:	48 8b 45 c0          	mov    -0x40(%rbp),%rax
    1530:	48 83 c0 08          	add    $0x8,%rax
    1534:	48 89 45 e0          	mov    %rax,-0x20(%rbp)
    1538:	8b 45 dc             	mov    -0x24(%rbp),%eax
    153b:	48 98                	cltq   
    153d:	48 c1 e0 02          	shl    $0x2,%rax
    1541:	48 89 c7             	mov    %rax,%rdi
    1544:	e8 d7 fb ff ff       	call   1120 <malloc@plt>
    1549:	48 89 45 e8          	mov    %rax,-0x18(%rbp)
    154d:	48 83 7d e8 00       	cmpq   $0x0,-0x18(%rbp)
    1552:	75 0f                	jne    1563 <main+0x70>
    1554:	48 8d 05 b4 0a 00 00 	lea    0xab4(%rip),%rax        # 200f <_IO_stdin_used+0xf>
    155b:	48 89 c7             	mov    %rax,%rdi
    155e:	e8 e6 fc ff ff       	call   1249 <die>
    1563:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%rbp)
    156a:	eb 3b                	jmp    15a7 <main+0xb4>
    156c:	8b 45 d8             	mov    -0x28(%rbp),%eax
    156f:	48 98                	cltq   
    1571:	48 8d 14 c5 00 00 00 	lea    0x0(,%rax,8),%rdx
    1578:	00 
    1579:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
    157d:	48 01 d0             	add    %rdx,%rax
    1580:	48 8b 00             	mov    (%rax),%rax
    1583:	8b 55 d8             	mov    -0x28(%rbp),%edx
    1586:	48 63 d2             	movslq %edx,%rdx
    1589:	48 8d 0c 95 00 00 00 	lea    0x0(,%rdx,4),%rcx
    1590:	00 
    1591:	48 8b 55 e8          	mov    -0x18(%rbp),%rdx
    1595:	48 8d 1c 11          	lea    (%rcx,%rdx,1),%rbx
    1599:	48 89 c7             	mov    %rax,%rdi
    159c:	e8 9f fb ff ff       	call   1140 <atoi@plt>
    15a1:	89 03                	mov    %eax,(%rbx)
    15a3:	83 45 d8 01          	addl   $0x1,-0x28(%rbp)
    15a7:	8b 45 d8             	mov    -0x28(%rbp),%eax
    15aa:	3b 45 dc             	cmp    -0x24(%rbp),%eax
    15ad:	7c bd                	jl     156c <main+0x79>
    15af:	8b 4d dc             	mov    -0x24(%rbp),%ecx
    15b2:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    15b6:	48 8d 15 37 fe ff ff 	lea    -0x1c9(%rip),%rdx        # 13f4 <sorted_order>
    15bd:	89 ce                	mov    %ecx,%esi
    15bf:	48 89 c7             	mov    %rax,%rdi
    15c2:	e8 85 fe ff ff       	call   144c <test_sorting>
    15c7:	8b 4d dc             	mov    -0x24(%rbp),%ecx
    15ca:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    15ce:	48 8d 15 35 fe ff ff 	lea    -0x1cb(%rip),%rdx        # 140a <reverse_order>
    15d5:	89 ce                	mov    %ecx,%esi
    15d7:	48 89 c7             	mov    %rax,%rdi
    15da:	e8 6d fe ff ff       	call   144c <test_sorting>
    15df:	8b 4d dc             	mov    -0x24(%rbp),%ecx
    15e2:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    15e6:	48 8d 15 33 fe ff ff 	lea    -0x1cd(%rip),%rdx        # 1420 <strange_order>
    15ed:	89 ce                	mov    %ecx,%esi
    15ef:	48 89 c7             	mov    %rax,%rdi
    15f2:	e8 55 fe ff ff       	call   144c <test_sorting>
    15f7:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
    15fb:	48 89 c7             	mov    %rax,%rdi
    15fe:	e8 cd fa ff ff       	call   10d0 <free@plt>
    1603:	b8 00 00 00 00       	mov    $0x0,%eax
    1608:	48 8b 5d f8          	mov    -0x8(%rbp),%rbx
    160c:	c9                   	leave  
    160d:	c3                   	ret    

Disassembly of section .fini:

0000000000001610 <_fini>:
    1610:	f3 0f 1e fa          	endbr64 
    1614:	48 83 ec 08          	sub    $0x8,%rsp
    1618:	48 83 c4 08          	add    $0x8,%rsp
    161c:	c3                   	ret    
