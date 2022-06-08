var myMainButton=document.getElementById('main'),
    myPower=document.getElementById('power');

myMainButton.onclick=function()
{
	'use strict';
	document.getElementById('monster1').style.display='none';
};

myPower.onclick=function()
{
	'use strict';
	myMainButton.addEventListener('click', function(){
			document.getElementById('monster2').style.display='none';
		});
};