var myImage=document.querySelector('img');

   if( myImage.hasAttribute('alt') )
   	    console.log('Yes, It has');
   	else
   		console.log('No, It has not');


    myImage.removeAttribute('title');

