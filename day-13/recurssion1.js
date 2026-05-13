function isPowerOfTwo(n) {
    if (n <= 0) return false;
    if (n === 1) return true;
    if (n % 2 !== 0) return false;
    
    return isPowerOfTwo(n / 2);
}

const num = 16;
if (isPowerOfTwo(num)) {
    console.log(`${num} is a power of 2`);
} else {
    console.log(`${num} is NOT a power of 2`);
}
