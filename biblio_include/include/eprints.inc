<?php

function search_eprints_content (){
global $language;
$lingua = $language->language ;
if ( $lingua == '') {
$lingua = 'it';
} else {
$lingua = 'en';	
	
}


$about = t('About') ;
$aboutlink = t('#') ;
$find = t('Search by keyword') ;
$search = t('Search') ;

$results = '<h2 style="margin:0px; font-size:16px; font-weight:bold;" style="font-weight:bold;">' . $find . '</h2>
<form id="searcheprints" target="_blank" method="get" accept-charset="utf-8" action="http://eprints.biblio.unitn.it/cgi/search/simple">

<input name="screen" value="Public::EPrintSearch" type="hidden">
<input name="q_merge"  value="ALL" type="hidden">
<input name="q_merge"  value="-date/creators_name/title" type="hidden">
 <input name="q" id="q" maxlength="256" type="text" class="ep_form_text" size="40">
 
<input value="' . $search . ' " name="_action_search" type="submit" > 
<!--<a href="http://eprints.biblio.unitn.it/advsearch">Click here for an advanced search</a>-->
</form>
<div class="more-info">
<a href="' . $aboutlink . '">' . $about. '</a>
</div>';
	      
return $results ;
}	

