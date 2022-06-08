# #!/bin/bash

# # free

# # date '+%A%B%d%G'
# # date '+The date of today is %F.'

# sudo date 081215212013 
# #Mon 12 Aug 2013 03:21:00 PM +03

# #Adding 7 Minutes!
# sudo date --set='+7minutes'

# sudo date --set='-1month'

#Calender
# cal
# cal 2022

#===============================

choose(){
	read ch
	case $ch in
   1)
      ls -a
      ;;
   2)
      date
      ;;
   3)
      who
      ;;
   4)
      ps -aux
      ;;
   5)
     exit
     ;;
esac

}

choose

