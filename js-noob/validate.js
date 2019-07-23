function SelectText() {
  var selectionObject = window.getSelection();
  alert(selectionObject.toString());
  alert(selectionObject.anchorNode.parentNode.attributes);
}
