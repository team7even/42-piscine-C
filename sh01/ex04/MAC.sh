# ifconfig brings the net-tools app to display network information
# then we use grep to catch the line where info about Ethernet
# is displayed
# using "ifconfig | grep "Ethernet"" we have following answer:
#          ether 08:00:27:a9:94:ed  txqueuelen 1000  (Ethernet)
# first part of the line are blank spaces so command 'cut' is used to extract
# the MAC address by using: 
# cut -d ' ' -f 10
# the -d (delimiter) is the SPACE (' ') and we count FIELDS with -f
# since there is a total of 9 spaces before the MAC address we put the 10
# as the field count
ifconfig | grep "Ethernet" | cut -d ' ' -f 10
