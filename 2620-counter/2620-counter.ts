function createCounter(n: number): () => number {
    var count = n;
    return function() {
        // count++;
        return count ++;
    }
}


/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */