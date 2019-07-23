var shopsApp = angular.module("ShopsApp", [] );

shopsApp.controller("ShopsController", function CountryListController( $scope, $http ) {
  $http.get("./shops.json").
    success( function(data, status, headers, config) {
      $scope.country_list = data;
    }).
    error( function( data, status, headers, config) {
      console.log("Cannot parse Json");
    });
});

function show_cities(elmt) {
  city_list = document.getElementsByClassName("city-list");
  for( i=0; i< city_list.length; i++ ) {
    city_list[i].style.display = "none";
  }
  country_cities = document.getElementById(elmt.innerHTML);
  country_cities.style.display = "grid";
}

function show_shops(elmt) {
  shops_list = document.querySelectorAll(".shops-list ul li");
  console.log(shops_list);
  for( i=0; i< shops_list.length; i++ ) {
    shops_list[i].style.display = "none";
  }
  shops = document.getElementById(elmt.innerHTML);
  shops.style.display = "grid";
}

