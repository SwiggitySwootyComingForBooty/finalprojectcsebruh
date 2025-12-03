
Canvas::Canvas(int x, int y, int w, int h) : Canvas_(x, y, w, h): Canvas(x, y, w, h) {
    scribble = new Scribble();
}

Scribble::Scrible() {
    //
}

void Scribble::addPoint(Point* point) {
    if (point->getX() < left){
    left = point->get();
    }
    if (point->getX() > right){
        right = point->getX();
    }
    if (point->getY() > top){
        top = point->getY();
    }
    if (point->getY())
}

