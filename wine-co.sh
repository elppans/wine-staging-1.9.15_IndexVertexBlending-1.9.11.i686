#!/bin/bash

if ! yum list installed | grep glibc.i686 >> /dev/null ;then
yum install glibc.i686
fi

INSTDIR=`dirname $0`

cd $INSTDIR
PWDIR=`pwd`

WINEX=wine

WINDIR="$PWDIR/bin"
WINLIB="$PWDIR/lib"
#WINLIB64="$PWDIR/lib64"
GCPMD="$PWDIR/winemd"
GCPATH="$PWDIR/winemod"
GCVD="$GCPATH/.vdate"
GCS32="$GCPATH/drive_c/windows/system32"
GCDIR="$GCPATH/drive_c/Program Files/exec"
WINEXEC="$1"
GCMEXEC="$GCDIR/main.exe"
WININST=`readlink -m "$0"`

export PATH="$WINDIR:$PATH"
export LD_LIBRARY_PATH="$WINLIB:$LD_LIBRARY_PATH"
#export LD_LIBRARY_PATH="$WINLIB64:$LD_LIBRARY_PATH"
export WINEARCH="win32"
#export WINEARCH="win64"
EXDLL=""
#"wmp=n;quartz=n;wmvcore=n;winegstreamer=;devenum=b"

        export WINEDLLOVERRIDES="$EXDLL"
        export WINEDEBUG="fixme-all,err-all,warn+cursor,-all"
        mkdir -p "$GCDIR"
        cd "$GCDIR"
        WINEPREFIX="$GCPATH" "$WINEX" "$WINEXEC" "$@"
