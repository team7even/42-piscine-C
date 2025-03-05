# Mostrar resultado de
cat /etc/passwd | \
# quitando comentarios - si el primer (^) carácter es # se elimina (d)
sed '/^#/d' | \
# mostrando una de cada dos líneas NR = número de línea y empezando en la 2da
awk 'NR % 2 == 0 {print $0}' | \
# extraer el nombre de usuario: datos separados por ":", el primero es el nombre
awk -F ":" '{  print $1 }' | \
# invertir cada nombre de usuario encontrado
rev | \
# ordenar por orden alfabético inverso (-r), -f ignora mayus vs minus, -n incluye números de ser necesario
sort -fnr | \
# imprimir sólo las líneas entre las variables FT_LINE1 y FT_LINE2 (incluidos)
awk -v FT_LINE1="$FT_LINE1" -v FT_LINE2="$FT_LINE2"  'NR >= FT_LINE1 && NR <= FT_LINE2 { print $0 }' | \
# removemos saltos de línea y reemplazamos por espacios para hacer una línea
tr '\n' ' ' | \
# cambiar los espacios por ', ' (coma + espacio) en toda la línea (g)
sed 's+ +, +g' | \
# agregando un '.' (punto) al final comparando el final de línea ($)
sed 's+, $+.+g' # | \
#tr -d '\n'
