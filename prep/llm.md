### Q1) What exactly is a llm?
- an llm is an ai model trained on a huge amount of text so that it can understand and generate human like language. it is called large because it has billons of parameters. parameters are essentially numbers the neural netwrok learns during training they encode patterns the model discorvered in language and data

### Q2) How does an LLM generate the next token?
- an llm first tokenizes the input and converts those tokens into embeddings there embeddings pass through multiple transformer layers where self attention builds a contextual representation of the sequence For the last position, the model produces a hidden-state vector. A linear output layer projects that vector into scores called logits, one for each token in the vocabulary. Softmax converts those logits into a probability distribution. A decoding strategy such as greedy decoding, temperature sampling, top-k, or top-p then selects the next token.That token is appended to the sequence, and the process repeats autoregressively.”

