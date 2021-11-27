import MeetupItem from "./MeetupItem";
function MeetupList(props) {
  return (
    <div>
      {props.meetup.map((meetup) => (
        <MeetupItem
          key={meetup.id}
          id={meetup.id}
          image={meetup.image}
          title={meetup.title}
          address={meetup.address}
          description={meetup.description}
        />
      ))}
    </div>
  );
}
export default MeetupList;
