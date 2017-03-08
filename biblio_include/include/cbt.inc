<?php

function search_cbt_content (){
global $language;
$lingua = $language->language ;



$about = t(' Info') ;
$aboutlink = t('/en/node/349') ;
$find = t('Search by keyword') ;
$search = t('Search') ;

$results = '<h2 style="margin:0px; font-size:16px; font-weight:bold;" style="font-weight:bold;">' . $find . '</h2> 		
    <form id="searchosegenius" action="http://www.cbt.biblioteche.provincia.tn.it/oseegenius/search" method="get" name="searchForm" target="_blank">
		<div class=form-item>
		  <input type="text" autocomplete="off" onfocus="if (value == \'' . $find.'\') {value =\'\'}"
onblur="if (value == \'\') {value = \''. $find . '\'}"
value="' . $find . '"  name="q" id="q" class="search-field">
        </div>		
		<input type="hidden" value="l" name="v" id="v">
		<input type="hidden" value="' . $lingua . '" name="l" >
	    
        <input type="submit" id="invio"value="' . $search. '" class="ui-button ui-widget ui-state-default ui-corner-all" role="button" aria-disabled="false">
		 <input type="hidden" value="catalog_source:NRA" name="f"> 			
		<select  style="display:none;" name="h" id="h" style="margin-top:10px; ">
							<option value="any_bc"><?php echo t("Keyword") ; ?></option>
        					<option value="author_bc"><?php echo t("Name") ; ?></option>
        					<option value="title_bc"><?php echo t("Title") ; ?></option>
        					<option value="sub_bc"><?php echo t("Subject") ; ?></option>
        					<option value="note_bc"><?php echo t("Notes") ; ?></option>
        					<option value="publisher_bc"><?php echo t("Publisher") ; ?></option>
        	        </select>			
        <span style="display:none;">mostra</span>
		
				         <select  name="s" style="display:none;">
							<option value="5">5</option>
							<option selected="" value="10">10</option>				
							<option value="25">25</option>				
							<option value="50">50</option>    	</select>
   
		<span style="display:none;">risultati per pagina ordinati per</span>
        
				<select  name="o" id="o" style="display:none;">
							<option value="score">Rilevanza</option>
							<option value="title">Titolo</option>
							<option value="author">Autore</option>
							<option value="year">Anno di pubblicazione</option>
			        </select>
    </form>
	<div class="more-info">
	<a class="ebscolink" title="about" href="' . $aboutlink . '" >' . $about . '</a>
	</div>';
	      

return $results ;
}	