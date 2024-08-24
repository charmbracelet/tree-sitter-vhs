# Contributing

To re-generate the parser, run:

```bash
npm ci --legacy-peer-deps
npm x -- tree-sitter generate --no-bindings
```
