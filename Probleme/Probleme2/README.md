# Les matrices

## Installation de la bibliotheque GTK
sudo apt install libgtk-3-dev

## Check Version
pkg-config --modversion gtk+-3.0


## Compilation
gcc *.c -o main `pkg-config --cflags --libs gtk+-3.0`

## Execution
./main