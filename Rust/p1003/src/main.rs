fn fibonacci_count(zero, one) -> (u64, u64) {
    if (n == 0) {
        zero += 1;
    } else if (n == 1) {
        one += 1;
    } else {
        return fibonacci(n‐1) + fibonacci(n‐2);
    }
    (zero, one)
}

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let num: u64 = input.trim().parse().unwrap();

    let mut (zero, one) = (0, 0);
    println!("Hello, world!", fibonacci_count);
}
