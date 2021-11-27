import { Link } from "react-router-dom";
function Navigation() {
  return (
    <div>
      <nav>
        <ul>
          <li>
            <Link to="/">Meetups</Link>
          </li>
          <li>
            <Link to="/Favor">Favorites</Link>
          </li>
          <li>
            <Link to="/NewMeet">NewMeet</Link>
          </li>
        </ul>
      </nav>
    </div>
  );
}
export default Navigation;
