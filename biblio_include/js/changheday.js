
var clikDate = new Date();

function loadDoc(direction) {
  //var direction ; 
  
  if (direction == 'next'){
    clikDate.setDate(clikDate.getDate() + 1);
  }
  
  if (direction == 'prev'){
    clikDate.setDate(clikDate.getDate() - 1);
  }
  
  
  var dd = clikDate.getDate();
  var mm = clikDate.getMonth() + 1;
  var y = clikDate.getFullYear();  
  var clikFormattedDate =  y + '-'+ mm + '-'+ dd;
  
  var path = window.location.pathname ;
  var pathArray = window.location.pathname.split( '/' );
  var secondLevelLocation = pathArray[1];
  console.log(path);
  if  (secondLevelLocation == 'en') {
    lingua = 'en' ;
  } else {
    lingua = 'it' ;
  }
  
  var xhttp;
  if (window.XMLHttpRequest) {
    // code for modern browsers
    xhttp = new XMLHttpRequest();
    } else {
    // code for IE6, IE5
    xhttp = new ActiveXObject("Microsoft.XMLHTTP");
  }
  xhttp.onreadystatechange = function() {
    if (xhttp.readyState == 4 && xhttp.status == 200) {
      document.getElementById("hp_openings_hours").innerHTML = xhttp.responseText;
    }
  }

  xhttp.open("GET", "orarihp?data=" + clikFormattedDate + '&lingua=' + lingua + '&nrequest=' + Math.random(), true);
  xhttp.send();
}