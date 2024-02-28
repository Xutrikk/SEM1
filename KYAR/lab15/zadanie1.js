let firstImg = document.getElementById("first");

firstImg.addEventListener("mouseover", firstFunction);

function firstFunction(){
    document.getElementById("fig").style.display = "block";
}

firstImg.addEventListener("mouseout", secondFunction);

function secondFunction(){
    document.getElementById("fig").style.display = "none";
}

let secondImg = document.getElementById("second");

secondImg.addEventListener("click", thirdFunction);

function thirdFunction(){
    document.getElementById("second").style.border = "10px solid red";
}

secondImg.addEventListener("dblclick", fourthFunction);

function fourthFunction(){
    document.getElementById("second").style.border = "none";
}

let thirdImg = document.getElementById("third");
let fourthImg = document.getElementById("fourth");

fourthImg.addEventListener("mouseover", fifthFunction);
fourthImg.addEventListener("mouseout", sixthFunction);

function fifthFunction(){
    document.getElementById("fourth").src = "https://universetoday.ru/wp-content/uploads/2018/05/TRAPPIST-1e.jpg";
    
}
function sixthFunction(){
    document.getElementById("fourth").src = "https://topnews.ru/wp-content/uploads/2020/07/15-17.jpg";
}