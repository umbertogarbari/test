<?php

function search_iris_content (){
global $language;
$lingua = $language->language ;
if ( $lingua == '') {
$lingua = 'it';
} else {
$lingua = 'en';	
	
}


$about = t(' Info') ;
$aboutlink = t('/en/node/366') ;
$find = t('Search by keyword') ;
$search = t('Search') ;
$placeholder = '';

$results = '<h2 style="margin:0px; font-size:16px; font-weight:bold;" style="font-weight:bold;">' . $find . '</h2>
<form id="searchiris" target="_blank" action="https://iris.unitn.it/simple-search" method="get">
  <div class="form-item">
    <input type="text" size="50"  onfocus="if (value == \'' . $find.'\') {value =\'\'}"
onblur="if (value == \'\') {value = \''. $find . '\'}"
value="' . $find . '" name="query" placeholder="' . $placeholder . '" >
  </div>
  <div class="search-submit">
    <input type="submit" value="'.$search.'">
  </div>
</form>
<div class="more-info">
<a href="' . $aboutlink . '">' . $about. '</a>
</div>';
	      
return $results ;
}	