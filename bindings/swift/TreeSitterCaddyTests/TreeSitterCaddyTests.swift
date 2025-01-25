import XCTest
import SwiftTreeSitter
import TreeSitterCaddy

final class TreeSitterCaddyTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_caddy())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Caddy grammar")
    }
}
