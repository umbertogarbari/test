<?php

function search_ebooks_content (){
global $language;
$lingua = $language->language ;

if ( $lingua == 'it') {
$lingua = 'it';
} else {
$lingua = 'en';	
}

$about = t(' Info') ;
$aboutlink = t('/en/node/354') ;
$find = t('Search by keyword') ;
$search = t('Search') ;

$results = '<h2 >' . $find . '</h2> 
    <form id="searchebookstitolo" method="get" action="http://www5.unitn.it/Biblioteca/' . $lingua . '/Web/LibriElettroniciParola" >
    
    <div class="form-item">
        <input type="text" 
		onfocus="if (value == \'' . $find .'\') {value =\'\'}"
        onblur="if (value == \'\') {value = \''. $find . '\'}"
        value="' . $find . '" name="parola" id="parola" >
    </div>
    <span >
        <input type="submit" id="invio"value="' . $search . '" class="ui-button ui-widget ui-state-default ui-corner-all" role="button" aria-disabled="false">
    </span>
    </form>
	<div class="more-info">
		<a href="' . $aboutlink . '"  target="_blank">' . $about . '</a>
    </div>';
	      

return $results ;
}	