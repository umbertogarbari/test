<?php

function search_banchedati_content (){
global $language;
$lingua = $language->language ;
if ( $lingua == 'it') {
$lingua = 'it';
} else {
$lingua = 'en';	
}

$about = t(' Info') ;
$aboutlink = t('/en/353') ;
$find = t('Search by database title') ;
$search = t('Search') ;

$results = '<h2 >' . $find . '</h2>
    <form id="searchbanchedatititolo" method="post" action="http://www5.unitn.it/Biblioteca/' . $lingua. '/Web/BancheDatiTitolo" >
    <div class="form-item" style="float: ">
        <input type="text" onfocus="if (value == \'' . $find.'\') {value =\'\'}"
onblur="if (value == \'\') {value = \''. $find . '\'}"
value="' . $find . '" name="titolo" id="titolo">
    </div>
    <div class="search-submit">
        <input type="submit" id="invio" value="' . $search . '" class="ui-button ui-widget ui-state-default ui-corner-all" role="button" aria-disabled="false">
    </div>
    </form>
	<div class="more-info">
		<a href="' . $aboutlink . '" >' . $about . '</a>
    </div>';
	      

return $results ;
}	