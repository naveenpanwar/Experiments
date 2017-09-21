var shopsApp = angular.module("ShopsApp", [] );

shopsApp.controller("ShopsController", function CountryListController( $scope, $http ) {
  $http.get("./shops.json").
    success( function(data, status, headers, config) {
      $scope.countries = data;
    }).
    error( function( data, status, headers, config) {
      console.log("Cannot parse Json");
    });
});

function show_shops(elmt) {
  console.log(elmt.innerHTML);
}

