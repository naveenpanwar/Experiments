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
      if (newCurrent) {
        this.current = newCurrent;
      }
      else {
        this.current = newCurrent;
      }
      
      return this.current;
    };

  });
  
  app.controller( 'ReviewController', function(){
    this.review = {};

    this.addReview = function(product) {
      product.reviews.push(this.review);
      this.review = {};
    }
  });

  app.directive( 'productTitle', function(){
    return {
      restrict: 'E',
      templateUrl: 'product-title.html'
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
        full: 'images/gem-01.gif',
        thumb: 'images/gem-01.gif',
      },
      {
        full: 'images/gem-02.gif',
        thumb: 'images/gem-02.gif',
      }
    ],
    reviews: [
      {
        stars: 5,
        body: "some body",
        author: "some author",
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
        full: 'images/gem-03.gif',
        thumb: 'images/gem-03.gif',
      },
      {
        full: 'images/gem-04.gif',
        thumb: 'images/gem-04.gif',
      }
    ],
    reviews: [
      {
        stars: 4,
        body: "some other body",
        author: "some other author",
      },
    ]
    },
  ]

})();
