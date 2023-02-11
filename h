<!DOCTYPE html>
<html lang="en">
    <head>
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <link rel="stylesheet" href="style.css">
        <title>Stephen's Website</title>
        <meta charset="UTF-8">
    </head>
    <body>
       <h1 class="text">My Homepage</h1>
       <p class="text">A welcoming message so all my users know they've found a friend's website.</p>
       <img id="smiley" alt="Smiley face" src="https://assets.codepen.io/6093409/smiley-face.png">
      
      <!-- Adding our JavaScript in the script tag -->
      <script>
        // Identifying our image
        const smiley = document.querySelector("#smiley");

        // Adding reaction when image is clicked
        smiley.addEventListener("click", () => {
           alert(`Smiley says "Welcome!"`);
        });
      </script>
      
    </body>
</html>
