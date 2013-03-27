(function ($) {

	// open external links in new window
	$("a[href*='http://']:not([href*='"+location.hostname+"']),[href*='https://']:not([href*='"+location.hostname+"'])").attr('target', '_blank').attr('title', 'Opens in a new window').addClass('external');

	$("#region-content a[href$='.pdf']").attr('target', '_blank').attr('title', 'Opens in a new window').addClass('pdf');
	$("#region-content a[href$='.PDF']").attr('target', '_blank').attr('title', 'Opens in a new window').addClass('pdf');

	// Enable collapsible FAQs
	if ($('.view-faq-list .views-row > div.answer').length) {
		$('.view-faq-list .views-row > div.answer').hide();
		$('.view-faq-list .views-row > div.question').addClass('open');
		$('.view-faq-list .views-row > div.question').click(function(){
			$(this).next().slideToggle();
			$(this).toggleClass('close');
			$(this).toggleClass('open');
		});
	};
	
	
	// Enable button ui effect for edit links
	if ($('.edit-node-link a').length) {
		$('.edit-node-link a').button();
	};
	
})(jQuery);;

