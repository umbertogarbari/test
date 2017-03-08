jQuery(document).ready(function(){
	(function ($) {

	$('#ebscohostCustomSearchBox').submit(function() {
      ga('send', 'event', 'Webform', 'Form submission', 'Ebsco');
      //console.log('click su Ebsco ricerca');
    });
  
    $('#searchperiodicititolo').submit(function() {
      ga('send', 'event', 'Webform', 'Form submission', 'Periodici');
    });
  
    $('#searchbanchedatititolo').submit(function() {
      ga('send', 'event', 'Webform', 'Form submission', 'Banchedati');
    });
  
    $('#searchebookstitolo').submit(function() {
      ga('send', 'event', 'Webform', 'Form submission', 'Ebooks');
    });
  
    $('#searchosegenius').submit(function() {
      ga('send', 'event', 'Webform', 'Form submission', 'OSEgenuis');
    });
	
	$('#searchiris').submit(function() {
      ga('send', 'event', 'Webform', 'Form submission', 'Iris');
    });
	
	$('#searcheprints').submit(function() {
      ga('send', 'event', 'Webform', 'Form submission', 'Eprints');
    });
	
	$('#searcheprintsphd').submit(function() {
      ga('send', 'event', 'Webform', 'Form submission', 'Eprints-phd');
    });
	
	$('#searchtesi').submit(function() {
      ga('send', 'event', 'Webform', 'Form submission', 'Tesi');
    });
	
		
    }(jQuery));
});