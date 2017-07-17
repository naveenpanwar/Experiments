(function() {
  var app = angular.module('store', []);

  app.controller( 'StoreController', function(){
    this.products = gems;
  });

  app.controller( 'PanelController', function(){
    this.tab = 1;

    this.selectTab = function(setTab) {
      this.tab = setTab;
    };
    
    this.isSelected = function(checkTab) {
      return this.tab === checkTab;
    };
  });
  
  app.controller( 'GalleryController', function(){
    this.current = 0;

    this.setCurrent = function(newCurrent) {
      this.current = newCurrent || 0;
    };
  });

  var gems = [
    {
    name: "Dodecahedron",
    price: 2.95,
    description: ".... ..........",
    canPurchase: true,
    soldOut: false,
    images: [
      {
        full: 'dodecahedron-01-full.jpg',
        thumb: 'dodecahedron-01-thumb.jpg',
      },
      {
        full: 'dodecahedron-02-full.jpg',
        thumb: 'dodecahedron-02-thumb.jpg',
      },
    ]
    },
    {
    name: "Pentagonal Gem",
    price: 5.95,
    description: ".... ..........",
    canPurchase: true,
    soldOut: false,
    images: [
      {
        full: 'dodecahedron-01-full.jpg',
        thumb: 'dodecahedron-01-thumb.jpg',
      },
      {
        full: 'dodecahedron-02-full.jpg',
        thumb: 'dodecahedron-02-thumb.jpg',
      },
    ]
    },
  ]

})();
