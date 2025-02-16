vector<int> stockSpan(vector<int>& prices) {
    stack<int> s;
    vector<int> span(prices.size(), 1);
    for (int i = 0; i < prices.size(); i++) {
        while (!s.empty() && prices[s.top()] <= prices[i]) s.pop();
        span[i] = (s.empty()) ? i + 1 : i - s.top();
        s.push(i);
    }
    return span;
}
