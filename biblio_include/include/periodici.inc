<?php

function search_periodici_content (){
global $language;
$lingua = $language->language ;
if ( $lingua == 'it') {
$lingua = 'it';
}else {
	$lingua = 'en';
}

$about = t(' Info') ;
$aboutlink = t('/en/node/352') ;
$find = t('Search by journal title or by words in journal title') ;
$search = t('Search') ;
$inputplaceholder = $find ;
  
$results = '<h2 style="margin:0px; font-size:16px; font-weight:bold;" style="font-weight:bold;">' . $find . '</h2>
    <form id="searchperiodicititolo" method="post" action="http://www5.unitn.it/Biblioteca/'. $lingua . '/Web/PeriodiciTitolo" >
    <div class="clear-block input-text">
        <div style="float: left; " class="form-item ">
            <input type="text" onfocus="if (value == \'' . $inputplaceholder.'\') {value =\'\'}"
onblur="if (value == \'\') {value = \''. $inputplaceholder . '\'}"
value="' . $inputplaceholder . '"	  name="titolo" id="titolo">
        </div>
		
    <div class="search-submit">
        <input type="submit" value="' . $search . '" id="invio" name="btntitolo" class="ui-button ui-widget ui-state-default ui-corner-all" role="button" aria-disabled="false" style="">
    </div>
	<div style="display:none;">
            <label for="operatore">
                Limita la ricerca</label>
            <div class="description">
                </div>
            <select id="polo" name="polo">
                <option value="all"></option>
                <option value="On-line">Periodici elettronici</option>
                <option value="V">Biblioteca Centrale</option>
                <option value="M">Biblioteca di Ingegneria</option>
                <option value="S">Biblioteca di Lettere</option>
                <option value="R">Biblioteca di Scienze cognitive</option>
                <option value="P">Biblioteca di Scienze</option>
            </select>
        </div>
    </form>
	 </div>
	<div class="more-info">
		<a href="' . $aboutlink . '" target="_blank">' . $about . '</a>
    </div>' ;
       

return $results ;
}	