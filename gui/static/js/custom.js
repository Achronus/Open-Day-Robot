$(document).ready(function() {

  if (sessionStorage.isVisited) {
    // Run preloader
    $("#preloader").modal('show');

    setTimeout(function() {
      $('#preloader').slideUp('slow');
      $(".modal-backdrop").slideUp('slow');
      $("#main-container").addClass('loaded');
    }, 3000);
  }
  else {
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
      $("#main-container").addClass('loaded');
    }, 11500);

    sessionStorage.isVisited = 'true';
  };
});