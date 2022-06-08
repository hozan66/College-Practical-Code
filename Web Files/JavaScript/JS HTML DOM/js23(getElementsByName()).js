var radios=document.getElementsByName('color');

   if( radios[0].checked )
   	alert('you chose Red');
   else if( radios[1].checked )
   	alert('you chose Green');
   else if( radios[2].checked )
   	alert('you chose Blue');
   else
   	alert('you chose Nothking');
   //in this browser always execute the last one