//1번에서 시작함
let slideIndex = 1;
showSlides(slideIndex);

//showSlides(n)을 정의
function showSlides(n) {
    let i;
    let slides = document.getElementsByClassName("slide");
    let dots = document.getElementsByClassName("dot");
    
    if (n > slides.length) {slideIndex = 1}    
    if (n < 1) {slideIndex = slides.length}
    
    for (i = 0; i < slides.length; i++) {
        slides[i].style.display = "none";  
    }
    for (i = 0; i < dots.length; i++) {
        dots[i].className = dots[i].className.replace(" active", "");
    }
    
    slides[slideIndex-1].style.display = "block";  
    dots[slideIndex-1].className += " active";
}

// 자동 슬라이드 (3초마다 변경)
let slidetime = setInterval(() => {
    moveSlide(1);
}, 2500);

// moveSlide(n)을 정의 
function moveSlide(n) {  //n이 이전화살표는 -1이고 다음화살표가 +1임
    showSlides(slideIndex += n);
    resetTimer(); // 버튼 클릭 시 타이머 초기화
}

// 점 클릭 컨트롤
function bannerdot(n) {
    showSlides(slideIndex = n);
    resetTimer();
}

// 사용자가 수동 조작 시 자동 넘김 타이머 재설정
function resetTimer() {
    clearInterval(slidetime);  
    slidetime = setInterval(() => {
        moveSlide(1);
    }, 2500);
}
