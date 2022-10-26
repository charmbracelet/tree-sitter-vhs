# Tree-sitter VHS

Syntax Highlighting for VHS `.tape` files.

<table>

<tr>
<td> Plain </td><td> Highlighted </td></tr>
<tr>
<td>

```
# Where should we write the GIF?
Output demo.gif

# 1200x600 terminal with 46px font.
Set FontSize 46
Set Width 1200
Set Height 600

# Type a command in the terminal.
Type "echo 'Welcome to VHS!'"

# Pause for dramatic effect...
Sleep 500ms

# Run the command by pressing enter.
Enter

# Admire the output for a bit.
Sleep 5s
```

</td>
<td>

```elixir
# Where should we write the GIF?
Output demo.gif

# 1200x600 terminal with 46px font.
Set FontSize 46
Set Width 1200
Set Height 600

# Type a command in the terminal.
Type "echo 'Welcome to VHS!'"

# Pause for dramatic effect...
Sleep 500ms

# Run the command by pressing enter.
Enter

# Admire the output for a bit.
Sleep 5s
```

</td>
</tr>
</table>

## Integrations

* [Neovim](https://github.com/nvim-treesitter/nvim-treesitter/blob/master/README.md#adding-parsers)
* [Emacs](https://github.com/emacs-tree-sitter/tree-sitter-langs)

## Feedback

We’d love to hear your thoughts on this project. Feel free to drop us a note!

* [Twitter](https://twitter.com/charmcli)
* [The Fediverse](https://mastodon.social/@charmcli)
* [Discord](https://charm.sh/chat)

## License

[MIT](https://github.com/charmbracelet/vhs/raw/main/LICENSE)

***

Part of [Charm](https://charm.sh).

<a href="https://charm.sh/">
  <img
    alt="The Charm logo"
    width="400"
    src="https://stuff.charm.sh/charm-badge.jpg"
  />
</a>

Charm热爱开源 • Charm loves open source
