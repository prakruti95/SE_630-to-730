function generateProfile(){

    let name = document.getElementById("nameInput").value;
    let bio = document.getElementById("bioInput").value;
    let img = document.getElementById("imgInput").value;

    let insta = document.getElementById("instaInput").value;
    let linkedin = document.getElementById("linkedinInput").value;
    let spotify = document.getElementById("spotifyInput").value;

    // Preview Update
    document.getElementById("previewName").innerText = name || "Your Name";

    document.getElementById("previewBio").innerText =
        bio || "Your short bio will appear here.";

    if(img !== ""){
        document.getElementById("previewImg").src = img;
    }

    document.getElementById("instaLink").href = insta;
    document.getElementById("linkedinLink").href = linkedin;
    document.getElementById("spotifyLink").href = spotify;
}