cd /usr/share/applications
ls -1 | sed -e 's/\.desktop$//' | sed -e 's/\org.gnome.//' | grep "$1" | head -1
