int solution(int angle) {
    return (angle == 90) ? (2) : (angle == 180 ? (4) : (angle < 90 ? (1) : (3)));
}