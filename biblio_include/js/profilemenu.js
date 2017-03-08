jQuery(document).ready(function(){
	(function ($) {

		var eventFired = 0;
			
    if ($(window).width() < 741) {
		//alert('Less than 741');
		$('#block-menu-block-26 h2').append('<span class="nav-button"><span class="icon-bar"></span><span class="icon-bar"></span><span class="icon-bar"></span></span>');
		$('#block-menu-block-27 h2').append('<span class="nav-button"><span class="icon-bar"></span><span class="icon-bar"></span><span class="icon-bar"></span></span>');
		$('#block-menu-block-26 .content').hide();
		$('#block-menu-block-27 .content').hide();
		//$('#block-menu-block-26 .content').show();
		$('#block-menu-block-26 h2').click(function() {
		$('#block-menu-block-26 .content').toggle(600); 
    });
	$('#block-menu-block-27 h2').click(function() {
		$('#block-menu-block-27 .content').toggle(600); 
    });
	
    }else {
      //alert('More than 741');
      eventFired = 1;
	  $('#block-menu-block-26 .content').show(600); 
	  $('#block-menu-block-27 .content').show(600); 
    }
	
	if ( $(".from_date").text() == $(".to_date").text() ) {
      // console.log("same");
	  // $(".from_date").text('');
    }

   }(jQuery));
});

