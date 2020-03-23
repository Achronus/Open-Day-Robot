$(document).ready(function() {

  if (!sessionStorage.isVisited) {
    // Display welcome screen
    $("#welcome-screen").modal('show');
    
    // Change text
    setTimeout(function() {
      $(".first").removeClass('shown').addClass('hidden');
      $(".second").removeClass('hidden').addClass('shown');
    }, 4000);

    // Slide welcome-screen up
    setTimeout(function() {
      $("#welcome-screen").slideUp('slow');
      $(".modal-backdrop").slideUp('slow');
    }, 11500);

    sessionStorage.isVisited = 'true';
  };
});