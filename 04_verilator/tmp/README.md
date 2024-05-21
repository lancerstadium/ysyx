# verilator install

```bash
sudo apt-get install git perl python3 make autoconf g++ flex bison ccache
sudo apt-get install libgoogle-perftools-dev numactl perl-doc
sudo apt-get install libfl2 help2man
sudo apt-get install libfl-dev
sudo apt-get install zlibc zlib1g zlib1g-dev

```


```bash
git clone https://github.com/verilator/verilator
cd verilator
unset VERILATOR_ROOT

# git pull 
# git tag 

git checkout stable
```


```bash
autoconf            # Create ./configure script
./configure         # Configure and create Makefile
make -j 4           # Build
sudo make install   # Install Verilator
```