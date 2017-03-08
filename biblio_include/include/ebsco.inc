<?php
function search_ebsco_content (){
global $language;
$lingua = $language->language ;
if ( $lingua == '') {
$lingua = 'it';
}

$about = t(' Info') ;
$aboutlink = t('/en/node/348') ;
$advancedsearch = t('Advanced search') ;
$advancedsearchlink = t('http://search.ebscohost.com/login.aspx?direct=true&site=eds-live&scope=site&type=1&mode=bool&authtype=ip,guest,uid&&custid=s1140642&groupid=main&profile=eds&lang=en') ;
$find = t('Find books, articles and more') ;
$search = t('Search') ;
$keyword = t('Keyword') ;
$title = t('Title') ;
$author = t('Author') ;
$inputplaceholder = t('Find books, articles and more');


$results = '<div class="mycontent" id="tabs-1">
  <h2 style="margin:0px; font-size:16px; font-weight:bold;">' . $find . '<!--<span class="beta" style="font-size:10px;color:#cc3333;float:right;margin-right:5px;" >&#946;eta version</span>--></h2>
<script src="http://support.ebsco.com/eit/scripts/ebscohostsearch.js" type="text/javascript"></script>

<!-- nuovo -->

<form id="ebscohostCustomSearchBox" action="" onsubmit="return ebscoHostSearchGo(this);" method="post" >
		<input id="ebscohostwindow" name="ebscohostwindow" type="hidden" value="1" />
		<input id="ebscohosturl" name="ebscohosturl" type="hidden" value="http://search.ebscohost.com/login.aspx?direct=true&site=eds-live&scope=site&type=0&custid=s1140642&groupid=main&profid=eds&mode=bool&lang=it&authtype=ip,guest" />
		<input id="ebscohostsearchsrc" name="ebscohostsearchsrc" type="hidden" value="db" />
		<input id="ebscohostsearchmode" name="ebscohostsearchmode" type="hidden" value="+" />
		<input id="ebscohostkeywords" name="ebscohostkeywords" type="hidden" value="" />
				<!-- parte visibile -->
					<div class="form-item"><input  id="ebscohostsearchtext" name="ebscohostsearchtext" type="text"

onfocus="if (value == \'' . $inputplaceholder.'\') {value =\'\'}"
onblur="if (value == \'\') {value = \''. $inputplaceholder . '\'}"
value="' . $inputplaceholder . '"					

					/></div>
					<div class="search-submit"><input type="submit" id="invio"value="' . $search . '"  /></div>
					<div id="guidedFieldSelectors" style="font-size:12px;font-weight:bold;">
						<input class="radio" type="radio" name="searchFieldSelector" id="guidedField_0" value="" checked="checked" />
						<label class="label" for="guidedField_0">' . $keyword . '&nbsp;</label>
						<input class="radio" type="radio" name="searchFieldSelector" id="guidedField_1" value="TI" />
						<label class="label" for="guidedField_1">' . $title . '&nbsp;</label>
						<input class="radio" type="radio" name="searchFieldSelector" id="guidedField_2" value="AU" />
						<label class="label" for="guidedField_2">' . $author . '&nbsp;</label>
					</div>
				<!-- parte visibile -->	
		<div id="limiterblock" style="display:none;" >
			<div id="limitertitle" style="display:none;">Limit Your Results</div>
			
			<div class="limiter" style="display:none;">
				<input type="checkbox" id="chkFullText" name="chkFullText"  />
				<label for="chkFullText">Full Text</label>
			</div>
			
			<div class="limiter" style="display:none;">
				<input type="checkbox" id="chkLibraryCollection" name="chkLibraryCollection"  />
				<label for="chkLibraryCollection">Available in Library Collection</label>
			</div>
			
			<div class="limiter" style="display:none;">
				<input type="checkbox" id="chkPeerReviewed" name="chkPeerReviewed"  />
				<label for="chkPeerReviewed">Peer Reviewed</label>
			</div>
			
			<div class="limiter" style="display:none;">
				<input type="checkbox" id="chkCatalogOnly" name="chkCatalogOnly"  />
				<label for="chkCatalogOnly">Catalog Only</label>
			</div>
			
		</div>

		
		<div id="disciplineBlock" style="margin-left:-px; overflow: auto;">
			
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="APPL"  />
				<label for="">Applied Sciences</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="COMP"  />
				<label for="">Computer Science</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="EART"  />
				<label for="">Earth & Atmospheric Sciences</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="GEOL"  />
				<label for="">Geology</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="LITE"  />
				<label for="">Literature & Writing</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="MATH"  />
				<label for="">Mathematics</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="POWE"  />
				<label for="">Power & Energy</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="SSHU"  />
				<label for="">Social Sciences & Humanities</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="AERO"  />
				<label for="">Aerospace Sciences</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="COHE"  />
				<label for="">Consumer Health</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="COMM"  />
				<label for="">Communication & Mass Media</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="DRAM"  />
				<label for="">Drama & Theater Arts</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="FILM"  />
				<label for="">Film</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="HIST"  />
				<label for="">History</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="LIFE"  />
				<label for="">Life Sciences</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="MARK"  />
				<label for="">Marketing</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="MILI"  />
				<label for="">Military History & Science</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="NURS"  />
				<label for="">Nursing & Allied Health</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="PHYT"  />
				<label for="">Physical Therapy</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="SOCY"  />
				<label for="">Sociology</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="ZOOL"  />
				<label for="">Zoology</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="EDUC"  />
				<label for="">Education</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="AGRI"  />
				<label for="">Agriculture & Agribusiness</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="BIOG"  />
				<label for="">Biography</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="DIPL"  />
				<label for="">Diplomacy & International Relations</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="GEOG"  />
				<label for="">Geography & Cartography</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="HEAL"  />
				<label for="">Health & Medicine</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="VISU"  />
				<label for="">Visual Arts</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="ARTS"  />
				<label for="">Arts & Entertainment</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="BIOL"  />
				<label for="">Biology</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="BUSI"  />
				<label for="">Business & Management</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="ENGI"  />
				<label for="">Engineering</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="LANG"  />
				<label for="">Language & Linguistics</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="LIBR"  />
				<label for="">Library & Information Science</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="MUSI"  />
				<label for="">Music</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="OCEA"  />
				<label for="">Oceanography</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="SPLS"  />
				<label for="">Sports & Leisure</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="TECH"  />
				<label for="">Technology</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="ANTH"  />
				<label for="">Anthropology</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="DENT"  />
				<label for="">Dentistry</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="ECON"  />
				<label for="">Economics</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="ENVI"  />
				<label for="">Environmental Sciences</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="FORE"  />
				<label for="">Forests & Forestry</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="INFO"  />
				<label for="">Information Technology</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="MINI"  />
				<label for="">Mining & Mineral Resources</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="PSYC"  />
				<label for="">Psychology</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="SOWO"  />
				<label for="">Social Work</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="SPME"  />
				<label for="">Sports Medicine</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="BIOT"  />
				<label for="">Biotechnology</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="BOTA"  />
				<label for="">Botany</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="LAWX"  />
				<label for="">Law</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="PHAR"  />
				<label for="">Pharmacy & Pharmacology</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="PHYS"  />
				<label for="">Physics</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="POGV"  />
				<label for="">Politics & Government</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="PUBL"  />
				<label for="">Public Health</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="VETM"  />
				<label for="">Veterinary Medicine</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="ARCH"  />
				<label for="">Architecture</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="CALM"  />
				<label for="">Complementary & Alternative Medicine</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="CHEM"  />
				<label for="">Chemistry</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="CONS"  />
				<label for="">Construction & Building</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="DANC"  />
				<label for="">Dance</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="ETHN"  />
				<label for="">Ethnic & Cultural Studies</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="NUTR"  />
				<label for="">Nutrition & Dietetics</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="RELI"  />
				<label for="">Religion & Philosophy</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="SCIE"  />
				<label for="">Science</label>
			</div>
			<div style="display:none;">
				<input type="checkbox" id="" name="" value="WOFE"  />
				<label for="">Women\'s Studies & Feminism</label>
			</div>
		</div>
		
	</form>

<!-- fine nuovo -->
<div class="more-info">
<a class="ebscolink" href="' . $aboutlink . '" >' . $about . '</a> <!--| <a class="ebscolink" href="' . $advancedsearchlink . '" >' . $advancedsearch . '</a> -->
</div>
  </div>' ;
  

return $results ;
}	
	