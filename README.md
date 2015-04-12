# Dwm Patches
Personal collection of dwm patches for dwm-6.0.

To be applied in order (requires dwm directory, assumed to be `$HOME/dwm/dwm-6.0`), to install as is:
```
mkdir $HOME/dwm
wget -c http://dl.suckless.org/dwm/dwm-6.0.tar.gz
tar -xzvf dwm-6.0.tar.gz
git clone https://github.com/bit11/dwm-patches.git $HOME/dwm/dwm-6.0/patches
cd $HOME/dwm/dwm-6.0/patches
chmod +x dwm-install.sh
./dwm-install.sh
```
