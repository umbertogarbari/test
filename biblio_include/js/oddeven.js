jQuery(document).ready(function(){
	(function ($) {
		$('.menu-block-23 > ul > li:even').addClass('even');
		$('.menu-block-23 > ul > li:odd').addClass('odd');
		$('.menu-block-22 > ul > li:even').addClass('even');
		$('.menu-block-22 > ul > li:odd').addClass('odd');
		$( "<hr>" ).insertAfter( ".menu-block-23 > ul > li.odd" );
		$( "<hr>" ).insertAfter( ".menu-block-22 > ul > li.odd" );
		
    }(jQuery));
});