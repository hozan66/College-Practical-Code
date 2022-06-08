//retrieve  the document title
    alert(document.title);

//changing the document title
document.title='second stage';
    alert(document.title);

//retrieve page URL
//brings the location of this page
    alert(document.URL);

//retrieve all links with href attribute
    alert('Number of links: ' + document.links.length);

//retrieve all links(anchors) with name attribute
    alert('Number of anchors: ' + document.anchors.length);

//retrieve all forms
    alert('Number of forms: ' + document.forms.length);

//retrieve all images
    alert('Number of images: ' + document.images.length);

//retrieve the source of the first image
    alert('source of the first image: ' + document.images[0].src);

