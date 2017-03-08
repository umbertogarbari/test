<h2 style="margin:0px; font-size:16px; font-weight:bold;" style="font-weight:bold;"><?php echo t("Search"); ?></h2>
<form id="searcheprintsphd" method="get" accept-charset="utf-8" action="http://eprints-phd.biblio.unitn.it//cgi/search/simple">


<input value="Public::EPrintSearch" name="screen" type="hidden" >
<input value="-date/creators_name/title" name="order" type="hidden" >
<input value="ALL" name="q_merge" type="hidden" >
<input maxlength="256" name="q" type="text" class="ep_form_text" size="40">
 
<input value="<?php echo t("Search"); ?>" name="_action_search" type="submit">

</form>