jQuery(document).ready(function ($) {
  console.log($("#ingredient-search"));
  $("#ingredient-search").submit(function (event) {
    event.preventDefault();
  });
  $("#ingredient").on("input", function (e) {
    let input_value = $(this).val().toLowerCase();
    console.log(`input : `, input_value, input_value.length);
    if (input_value.length > 2) {
      $("#ingredient-result").html("");
      let links_html = "";
      $(".view-ingredients h2").each(function () {
        if ($(this).text().toLowerCase().indexOf(input_value) != -1) {
          links_html += $(this).html();
        }
      });
      if (links_html) $("#ingredient-result").html(links_html);
      else
        $("#ingredient-result").html(
          "<h2>Aucun ingrédient ne correspond à votre recherche. Attention à l'ortographe et aux accents !</h2>"
        );
    } else {
      $("#ingredient-result").html(
        "<h2>Veuillez entrer au moins 3 lettres</h2>"
      );
    }
  });
  /* $("#ingredient").change(function (event) {
    
  }); */
  /* $("#ingredient-search").on("submit", (e) => {
    
  }); */

  $(".nav-toggle").click(function () {
    $("#main-menu div ul:first-child").slideToggle(250);
    return false;
  });

  if ($(window).width() > 640 || $(document).width() > 640) {
    $("#main-menu li").mouseenter(function () {
      $(this)
        .children("ul")
        .css("display", "none")
        .stop(true, true)
        .slideToggle(250)
        .css("display", "block")
        .children("ul")
        .css("display", "none");
    });

    $("#main-menu li").mouseleave(function () {
      $(this)
        .children("ul")
        .stop(true, true)
        .fadeOut(250)
        .css("display", "block");
    });
  } else {
    $("#main-menu li").each(function () {
      if ($(this).children("ul").length)
        $(this).append(
          '<span class="drop-down-toggle"><span class="drop-down-arrow"></span></span>'
        );
    });

    $(".drop-down-toggle").click(function () {
      $(this).parent().children("ul").slideToggle(250);
    });
  }
});
