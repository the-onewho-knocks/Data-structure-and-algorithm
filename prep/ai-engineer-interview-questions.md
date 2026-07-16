# AI Engineer Interview Prep — Full Question Bank

Organized by category. Sections C–G and K are where you'll be tested hardest given your HexaFinance/Qdrant profile — prioritize those.

---

## A. Core DSA / CS Fundamentals
Standard technical screen material — still gates most interviews regardless of AI focus.

- Two Sum, subarray/sliding window problems
- Reverse a linked list, detect a cycle
- Valid parentheses, implement a stack-based problem
- BFS/DFS traversal, shortest path (Dijkstra)
- Binary search and variants
- Basic DP (climbing stairs, knapsack, LCS)
- Time/space complexity analysis of your own code, on the spot
- Design a data structure (e.g., LRU cache — very common, practice this one specifically)

---

## B. Backend & Systems Engineering (Go-specific)
Your actual strength — expect these to go deep.

- Explain Go's concurrency model — goroutines vs threads, channels, select statements
- How does Go's garbage collector work, at a high level?
- Walk through how you'd design a rate limiter (token bucket vs sliding window)
- How do you handle retries and backoff for a flaky downstream service?
- Explain clean/hexagonal architecture — why did you choose it for HexaFinance?
- How do you structure error handling across service boundaries in Go?
- Database indexing — how would you speed up a slow query?
- How do you handle idempotency in an API that might receive duplicate requests?
- Explain the CAP theorem and where your systems land on it
- How would you design a system to survive a downstream API going down entirely?

---

## C. Core LLM/AI Concepts
Expect at least a few of these in any AI engineer screen.

- What is a token? How does tokenization affect cost and context limits?
- Explain embeddings — what do the numbers actually represent?
- What is attention, at a high level? Why did transformers replace RNNs?
- What's the difference between a base model and an instruction-tuned/chat model?
- Explain temperature, top-p, top-k sampling — how do they affect output?
- What is context window, and what happens when you exceed it?
- Explain the difference between fine-tuning, RAG, and prompt engineering — when would you use each?
- What is hallucination, and why does it happen?
- What's the difference between embedding models and generative models?
- Explain few-shot vs zero-shot vs chain-of-thought prompting

---

## D. RAG-Specific (you built this — expect deep questions)
- Walk me through your RAG pipeline end to end
- How did you decide on your chunking strategy? What tradeoffs did you consider (chunk size, overlap)?
- Why did you choose your specific embedding model?
- How do you handle retrieval when no relevant documents exist?
- How would you evaluate whether your retrieval is actually good (precision/recall of retrieved chunks)?
- What's the difference between semantic search and keyword search? When would you combine them (hybrid search)?
- How do you handle stale or updated documents in your vector store?
- What happens to RAG quality as your document corpus scales to millions of documents?
- How would you re-rank retrieved results before passing them to the LLM?

---

## E. Agents & Multi-Agent Systems (LangGraph-specific)
- Walk me through your multi-agent architecture in HexaFinance
- Why LangGraph over a simple sequential chain or a custom agent loop?
- How do agents communicate state between each other in your system?
- What happens when one agent in the pipeline fails? How do you handle that gracefully? (This is your deterministic fallback story — know it cold.)
- How do you prevent infinite loops or runaway costs in an agentic system?
- How would you add a human-in-the-loop checkpoint to an agent pipeline?
- What's the difference between an orchestrator-worker pattern and peer-to-peer agent communication?
- How do you debug an agent pipeline when the final output is wrong — which agent do you suspect first, and how do you trace it?
- How would you handle an agent that needs to call an external tool that's rate-limited?

---

## F. Vector Databases (Qdrant-specific — you contribute to this, own it)
- Why Qdrant over Pinecone, Weaviate, or pgvector? Be ready to give a real technical answer, not just "I already used it"
- How does approximate nearest neighbor (ANN) search work, at a high level (HNSW)?
- What's the tradeoff between search speed and recall in vector search?
- How would you filter vector search results by metadata efficiently?
- How does Qdrant handle sharding/scaling as your dataset grows?
- Since you've contributed to Qdrant's codebase — what did you learn about the internals from that experience? (This is a great differentiator question, prepare a real answer.)
- What's the difference between exact and approximate vector search, and when does the difference matter?

---

## G. Evals & Production Observability
Most students skip this — you built it, so this should be a strength.

- How do you evaluate an LLM system that doesn't have a single "correct" answer?
- What metrics did you use in your eval harness, and why those specifically?
- How would you detect if your RAG system's quality degraded after a deployment change?
- How do you monitor cost and latency for an LLM-powered system in production?
- What's your approach to logging/tracing across a multi-agent pipeline for debugging?
- How would you set up a golden dataset for regression testing an LLM feature?
- How do you handle non-determinism in LLM outputs when writing tests?

---

## H. LLM APIs & Production Concerns
- How do you handle rate limits across multiple LLM provider APIs (you used both Gemini and Groq — talk about this)?
- Why use multiple LLM providers instead of one? What are the tradeoffs?
- How would you implement a fallback chain across providers if one is down or rate-limited?
- How do you handle streaming responses from an LLM API in a backend service?
- How would you cache LLM responses to save cost, and what are the risks of doing so?
- What's your approach to prompt versioning and testing prompt changes safely?
- How do you handle sensitive data (PII) flowing through third-party LLM APIs?

---

## I. System Design (AI-specific)
Expect at least one of these as a 30–45 min design round.

- Design a RAG-based customer support system for a company with 1M+ documents
- Design a multi-agent system for automated research/report generation
- Design a system to serve an LLM-powered feature to 100K concurrent users
- Design an evaluation pipeline for a production LLM feature
- Design a system that combines real-time data with LLM-generated insights (very close to what HexaFinance already does — use it as your reference)
- How would you design for graceful degradation when your LLM provider has an outage?

---

## J. Live Coding Prompts (AI-engineering flavored)
- Write a function to chunk a long document into overlapping segments
- Implement a simple in-memory rate limiter
- Implement retry-with-exponential-backoff for a flaky API call
- Given a list of embeddings and a query embedding, implement cosine similarity search from scratch
- Implement a basic LRU cache
- Write a function that streams and parses a chunked API response
- Debug a given piece of code that has a race condition (Go-specific, likely given your background)

---

## K. Project Deep-Dive — Prepare Real Answers for These
These will come up almost verbatim. Write out full answers in advance, not just bullet points.

- Walk me through HexaFinance end to end — what problem does it solve?
- Why did you split the system into Go (backend) and Python (AI layer)? Would you make the same choice again?
- What was the hardest technical decision you made building this, and why?
- What would you do differently if you rebuilt it today?
- What's the most interesting bug you ran into, and how did you debug it?
- How does your deterministic fallback actually work, step by step, when the LLM call fails?
- If this had to serve real users tomorrow, what would break first at scale?

---

## L. Open Source Contribution Questions
Given your Qdrant/ClickHouse/Grafana k6 PRs — these are a huge asset, prepare tight answers.

- Walk me through one of your merged PRs — what was the issue, and how did you solve it?
- What was hardest about contributing to a large, unfamiliar codebase?
- How did you get up to speed on the project's architecture before contributing?
- Tell me about a time a maintainer pushed back on your PR — how did you handle the feedback?
- Why did you choose to contribute to Qdrant specifically?
- What did contributing to Qdrant teach you about vector database internals that you didn't know before?

---

## M. Behavioral / Culture Fit (especially for remote roles)
- Why are you interested in AI engineering specifically, not just backend engineering?
- Why do you want to work remotely / for a company outside India?
- Tell me about a time you had to learn something completely new under time pressure
- Describe a disagreement with a teammate or reviewer and how you resolved it
- How do you stay productive and communicate effectively in an async, remote-first environment?
- Tell me about a project that failed or didn't go as planned — what did you learn?
- What does "ownership" mean to you in an engineering role?

---

## N. AI Safety / Limitations (increasingly common, don't skip)
- What are the risks of deploying an LLM-powered feature to real users?
- How would you prevent prompt injection in a system that takes user input and feeds it to an LLM?
- What's your approach to handling a model that confidently gives a wrong answer?
- How do you think about bias in retrieval or generation for a production system?
- Where do you draw the line on what an autonomous agent should be allowed to do without human approval?

---

## How to Actually Prepare
1. **Sections D, E, F, G, K are your differentiators** — most candidates can't answer these with real depth. Spend the most time here since this is where you separate from generic applicants.
2. Write full answers (not bullets) for every question in Section K — these come up in nearly every interview about your project.
3. For Section L, pick your best 1–2 PRs and be able to explain them in under 2 minutes each.
4. Practice Section M out loud — behavioral answers sound rehearsed-bad if you're reading them for the first time live.
5. Section A/B/J are gatekeeping rounds — don't neglect them just because AI content feels more interesting to prep.
