angular.module('app', ["pubnub.angular.service"])
 .controller('ChatCtrl', function($scope, Pubnub) {        
   $scope.channel = 'messages-channel';
   // Generating a random uuid between 1 and 100 using an utility function from the lodash library.         
   $scope.uuid = _.random(100).toString();
   Pubnub.init({
         publish_key: 'pub-c-f180353d-405a-4b5d-8714-553806450f39',
         subscribe_key: 'sub-c-28d38dde-38ef-11e6-a169-02ee2ddab7fe',
         uuid: $scope.uuid
       });
});
