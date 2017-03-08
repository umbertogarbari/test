<?php

function search_tesi_content (){
global $language;
$lingua = $language->language ;
if ( $lingua == 'it') {
$lingua = 'it';
} else {
$lingua = 'en';	
}


$about = t(' Info') ;
$aboutlink = t('/en/node/355') ;
$find = t('Search by degree thesis title') ;
$search = t('Search') ;

$results = '<h2 style="margin:0px; font-size:16px; font-weight:bold;" style="font-weight:bold;">' . $find . '</h2>
<form id="searchtesi" action="http://webapps.unitn.it/Biblioteca/' . $lingua . '/Web/Tesi" method="post">
  <div class="form-item">
      <input id="titolo" onfocus="if (value == \'' . $find.'\') {value =\'\'}"
onblur="if (value == \'\') {value = \''. $find . '\'}"
value="' . $find . '" name="titolo" size="50" type="text" value="">
  </div>
	  <input  name="autorecognome" type="hidden" value="">
	  <input  name="autorenome" type="hidden" value="">
	  <input  name="extratipo" type="hidden" value="R">
	  <input  name="extracognome" type="hidden" value="">
	  <input  name="extranome" type="hidden" value="">
	  <input  name="annoaccademico" type="hidden" value="">
	  <input  name="tipo" type="hidden" value="">
	  <input  name="autorizzazione" type="hidden" value="">
  <div class="search-submit">
      <input type="submit" value="'.$search.'">
  </div>
</form>
<div class="more-info">
<a href="' . $aboutlink . '">' . $about. '</a>
</div>';
	      
return $results ;
}	