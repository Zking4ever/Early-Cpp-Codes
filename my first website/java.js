 function myfunction(){
if(document.getElementById("button").innerHTML=="dark"){

    document.getElementById("button").innerHTML="bright";
    document.body.style.backgroundColor="black";
    document.getElementById("dark").style.color="white"
    document.getElementById("darkp").style.color="white";
}else if(document.getElementById("button").innerHTML=="bright"){
    document.getElementById("button").innerHTML="dark";
    document.body.style.backgroundColor="white";
    document.getElementById("dark").style.color="black";
    document.getElementById("darkp").style.color="black";
}
        
    }