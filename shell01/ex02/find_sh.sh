find . -type f -name '*.sh'  | rev | cut -c4-  | cut -d '/' -f1 | rev
